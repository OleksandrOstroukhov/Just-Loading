# Just Loading

## Description

**Just Loading** is an advanced data loading tool that automates the process of extracting, processing, and saving critical customer information into a database. This project supports multiple database types and uses multithreading to improve performance, with logging and error handling capabilities.

## Technologies

The project utilizes the following technologies:

- **C++**: Implementation of main data processing algorithms, multithreading, and logging.
- **Oracle, MySQL, PostgreSQL**: Supported databases for storing customer data.
- **JavaScript**: Script for interacting with the database and managing the loading process.
- **JSON**: Used for configuration and data management.

## Features

- **Multi-database support**: Works with Oracle, MySQL, and PostgreSQL.
- **Multithreaded processing**: Parallel processing to increase performance.
- **Logging**: Detailed logs of all operations with different log levels (Info, Warning, Error).
- **Error handling**: Robust error handling and reporting.
- **Interactive Console**: User interaction through the command line interface.
- **Configuration via JSON**: Easy configuration management using JSON files.

## Installation and Running

### Requirements

- A C++ compiler (e.g., GCC or MSVC) installed.
- Oracle, MySQL, or PostgreSQL database installed.
- Node.js for running JavaScript files.

### Installation Steps

1. **Clone the repository:**

   ```bash
   git clone https://github.com/OleksandrOstroukhov/Just-Loading.git
   cd Just-Loading
   ```

2. **Configure the database settings:**

   - Open the `config.json` file and enter your database connection parameters.

3. **Compile and run the C++ code:**

   - To compile the C++ program:
   
     ```bash
     g++ main.cpp database.cpp logger.cpp data_processor.cpp -o loadData -pthread
     ```

   - To run the program:

     ```bash
     ./loadData
     ```

4. **Run the JavaScript script:**

   - Ensure Node.js is installed.
   - Run the script to interact with the database:

     ```bash
     node database.js
     ```

## Future Improvements

- Adding support for more databases and data sources.
- Expanding the user interface and adding a web-based dashboard.
- Implementing more sophisticated error handling and recovery mechanisms.
- Enhancing the data processing algorithms for better performance.

## Contributing

If you have ideas for improving the project or would like to contribute, please create a pull request or open an issue. We always welcome new suggestions and help!

## License

This project is licensed under the MIT License. See the LICENSE file for details.
```

This `README.md` file should now serve as a comprehensive guide for anyone who wants to understand, install, run, and contribute to the "Just Loading" project.
