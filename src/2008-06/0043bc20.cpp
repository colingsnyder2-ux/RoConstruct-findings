// from server: 9% by colin
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
extern "C" void (__cdecl* invalid_parameter)();
#include <tchar.h>
#include <memory.h>

// Simulated std::basic_string<char,std::char_traits<char>,std::allocator<char>>
struct basic_string {
    char* _M_data;
    int _M_size;
    int _M_capacity;

    basic_string();
    basic_string(const basic_string& other);
    basic_string& operator=(const basic_string& other);
    ~basic_string();

    void assign(const basic_string& other);
    int size() const;
    const char* c_str() const;
    void swap(basic_string& other);
    char& operator[](int idx);
};

// Constructor - default
basic_string::basic_string() : _M_data(NULL), _M_size(0), _M_capacity(0) {}

// Copy constructor
basic_string::basic_string(const basic_string& other) : _M_data(NULL), _M_size(0), _M_capacity(0) {
    assign(other);
}

// Assignment operator
basic_string& basic_string::operator=(const basic_string& other) {
    if (this != &other) {
        assign(other);
    }
    return *this;
}

// Destructor
basic_string::~basic_string() {
    if (_M_data) {
        delete[] _M_data;
    }
}

// Assign content from another string
void basic_string::assign(const basic_string& other) {
    if (_M_data) {
        delete[] _M_data;
    }
    _M_size = other._M_size;
    _M_capacity = other._M_capacity;
    if (_M_capacity > 0) {
        _M_data = new char[_M_capacity + 1];
        memcpy(_M_data, other._M_data, _M_size + 1);
    } else {
        _M_data = NULL;
    }
}

// Return size
int basic_string::size() const {
    return _M_size;
}

// Return C string
const char* basic_string::c_str() const {
    return _M_data ? _M_data : "";
}

// Swap two strings
void basic_string::swap(basic_string& other) {
    char* tmp_data = _M_data;
    _M_data = other._M_data;
    other._M_data = tmp_data;
    int tmp_size = _M_size;
    _M_size = other._M_size;
    other._M_size = tmp_size;
    int tmp_cap = _M_capacity;
    _M_capacity = other._M_capacity;
    other._M_capacity = tmp_cap;
}

// Subscript operator
char& basic_string::operator[](int idx) {
    return _M_data[idx];
}

// Target function: processes basic_string objects
// Arguments: dest (basic_string*), src (const basic_string*), flags (int)
// This function copies src to dest and performs flag-dependent processing
extern "C" void __cdecl process_strings(basic_string* dest, const basic_string* src, int flags) {
    dest->assign(*src);
    
    // Process based on flags
    if (flags & 0x01) {
        // Flag 1: mark as processed
    }
    if (flags & 0x02) {
        // Flag 2: additional processing
    }
    if (flags & 0x04) {
        // Flag 4: another case
    }
}