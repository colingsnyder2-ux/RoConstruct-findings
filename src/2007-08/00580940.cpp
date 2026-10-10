// from server: 37% by colin
// Reconstructed from the target machine code.
// The function is a member of RBX::Log (thiscall, ecx = this).
// It parses a double from a stringstream and returns it.

extern "C" {
    // MSVCP80.dll imports used by the target.
    // basic_stringstream<char, char_traits<char>, allocator<char> >::basic_stringstream(int)
    void* __stdcall stringstream_ctor(void* self, int mode);
    // basic_istream<char, char_traits<char> >::operator>>(double&)
    void* __stdcall istream_read_double(void* self, double* value);
    // basic_istream<char, char_traits<char> >::get()
    int __stdcall istream_get(void* self);
    // basic_stringstream<char, char_traits<char>, allocator<char> >::~basic_stringstream()
    void __stdcall stringstream_dtor(void* self);
    // std::operator<<(basic_ostream<char, char_traits<char> >&, basic_string<char, char_traits<char>, allocator<char> > const&)
    void* __stdcall ostream_write_string(void* self, const void* str);
    // std::bad_cast::bad_cast(char const*)
    void* __stdcall bad_cast_ctor(void* self, const char* msg);
}

// The target calls through import thunks at fixed addresses.  These are
// declared as function pointers so the compiler emits indirect calls.
typedef void* (__stdcall *PFN_stringstream_ctor)(void*, int);
typedef void* (__stdcall *PFN_istream_read_double)(void*, double*);
typedef int   (__stdcall *PFN_istream_get)(void*);
typedef void  (__stdcall *PFN_stringstream_dtor)(void*);
typedef void* (__stdcall *PFN_ostream_write_string)(void*, const void*);
typedef void* (__stdcall *PFN_bad_cast_ctor)(void*, const char*);

// Import thunks (addresses from the target).
extern PFN_stringstream_ctor       pfn_stringstream_ctor;
extern PFN_istream_read_double     pfn_istream_read_double;
extern PFN_istream_get             pfn_istream_get;
extern PFN_stringstream_dtor       pfn_stringstream_dtor;
extern PFN_ostream_write_string    pfn_ostream_write_string;
extern PFN_bad_cast_ctor           pfn_bad_cast_ctor;

// Helper called at the end of the error path.
extern void __cdecl throw_bad_lexical_cast();

// The class.  Only the members touched by this function are declared.
struct RBX_Log
{
    double parseDouble(const char* text);
};

double RBX_Log::parseDouble(const char* text)
{
    // Local storage for the stringstream object and the parsed value.
    // The target allocates 0xac bytes of stack plus a small header.
    char streamStorage[0xac];
    double value;

    // Construct the stringstream with mode 3 (in | out).
    pfn_stringstream_ctor(streamStorage, 3);

    // Read a double from the stream.
    pfn_istream_read_double(streamStorage, &value);

    // Check stream state; if the read failed, throw.
    if (pfn_istream_get(streamStorage) == -1)
    {
        // The target builds a bad_cast exception and calls a helper.
        char exceptionStorage[0x20];
        pfn_bad_cast_ctor(exceptionStorage, "bad lexical cast: source type value could not be interpreted as target");
        throw_bad_lexical_cast();
    }

    // Destroy the stringstream and return the parsed value.
    pfn_stringstream_dtor(streamStorage);
    return value;
}
