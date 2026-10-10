// from server: 41% by colin
// Minimal reconstruction of 0055ae60 (RBX::VTool::FactoryProduct::Creator ctor)
// 32-bit x86, MSVC VS2005 /O2 /GS /EHsc /MD

extern "C" {
    // MSVCP80.dll imports (std::string / stringstream)
    void __stdcall msvcp80_string_ctor(void* self);
    void __stdcall msvcp80_string_dtor(void* self);
    void __stdcall msvcp80_stringstream_ctor(void* self, int mode);
    void __stdcall msvcp80_stringstream_dtor(void* self);
    void __stdcall msvcp80_ostream_flush(void* self);

    // Internal call targets
    void* __stdcall sub_569800();
    void  __stdcall sub_53e720(void* self, void* arg);
    void  __stdcall sub_467cd0(void* self, void* arg);
    void  __stdcall sub_566670(void* self, void* arg);
    void  __stdcall sub_4675d0(void* self);
    void  __stdcall sub_40f800(void* self);
    void  __stdcall sub_62fc62(void* p);
    void  __stdcall sub_553ea0(void* a, void* b, int c, void* d);
}

// Opaque layout helpers
struct StringBuf { char pad[0x1c]; };
struct StreamBuf { char pad[0x40]; };

struct Creator {
    void ctor();
};

void Creator::ctor()
{
    // Local storage matching the target's stack frame
    char local_50[0x28];   // stringstream-ish
    char local_28[0x1c];   // std::string
    char local_0c[0x1c];   // std::string

    // Construct stringstream at local_50 with mode 3
    msvcp80_stringstream_ctor(local_50, 3);

    // Create the object
    void* obj = sub_569800();

    // Register with this
    sub_53e720(this, obj);

    // Build a std::string from local_50
    sub_467cd0(local_28, local_50);

    // Append obj to the string
    sub_566670(local_28, obj);

    // Flush the stream
    msvcp80_ostream_flush(local_50);

    // Destroy the temporary string
    sub_4675d0(local_28);

    // Release obj if present
    if (obj) {
        sub_40f800(obj);
        sub_62fc62(obj);
    }

    // Construct local_0c string
    msvcp80_string_ctor(local_0c);

    // Call sub_553ea0 with local_0c, 1, local_50, and a stack temp
    char temp[0x20];
    sub_553ea0(temp, local_50, 1, local_0c);

    // Destroy local_0c
    msvcp80_string_dtor(local_0c);

    // Destroy local_28
    msvcp80_string_dtor(local_28);

    // Destroy stringstream
    msvcp80_stringstream_dtor(local_50);
}
