# C++ Socket Server & POSIX Wrapper

A lightweight, object-oriented C++ TCP Socket Server wrapper designed for POSIX/Linux systems. This library encapsulates low-level socket system calls (`socket`, `bind`, `listen`, `accept`, `read`, `write`) into an easy-to-use Class architecture.

---

## Developer Profile

* **Name:** Abdelrhman Saieed
* **LinkedIn:** [Abdelrhman Saieed](https://www.linkedin.com/in/abdelrhman-saieed-10a553309)
* **GitHub:** [abdelrhmansaieedSWE](https://github.com/abdelrhmansaieedSWE)

---

##  Features

* **Object-Oriented Design:** Clean `my::sock` namespace and C++ class encapsulation.
* **POSIX Socket Integration:** Native wrapper for system socket calls.
* **Address Reuse:** Includes `SO_REUSEADDR` flag in `bind_socket()` to prevent port binding locks.
* **System Command Execution:** Integrates received commands directly with system-level execution using `std::system()`.
* **Automatic Cleanup:** Destructor handles socket closure (`close(df)`) to prevent file descriptor leaks.

---

## 📂 Project Structure

```text
.
├── sock.hpp     # Socket class definition and interface header
├── sock.cpp     # Socket methods implementation
├── main.cpp     # Application entry point (Server loop & execution)
└── Makefile     # Build automation script