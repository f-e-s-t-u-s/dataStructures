
// ! function to get elements from the user
function enterElements() {
  var arr_elements = prompt("Enter a list of numbers separated by commas:");
  var numberArray = arr_elements.split(",").map(Number);
  console.log(numberArray);
  return numberArray;
}

function displayOutput() {
  const output_text = document.querySelector("#output-text");
  const search = document.querySelector("#search");
  //   ! get user values
  const values = enterElements();

  output_text.textContent = `Number Array: ${values}`;
  search.addEventListener("click", function () {
    const number_to_search = prompt("Enter the number to search for:");
    linearSearch(values, number_to_search, output_text);
  });
}

function linearSearch(values, number_to_search, output_text) {
  let found = false;

  for (let i = 0; i < values.length; i++) {
    if (number_to_search == values[i]) {
      const position = i + 1;
      console.log(position);
      found = true;
      output_text.textContent = `Number found at position ${position}`;
      break;
    }
  }
  if (!found) {
    output_text.textContent = "Number not found";
  }
}
