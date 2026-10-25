// from server: 100% by king_originala
// roc 2008-06 007a9c90  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a9c90
//
// 007a9c90  8b442404             mov eax, dword ptr [esp + 4]
// 007a9c94  83ec0c               sub esp, 0xc
// 007a9c97  85c0                 test eax, eax
// 007a9c99  7c1a                 jl 0x7a9cb5
// 007a9c9b  3b05f4389700         cmp eax, dword ptr [0x9738f4]
// 007a9ca1  7d12                 jge 0x7a9cb5
// 007a9ca3  8b0df0389700         mov ecx, dword ptr [0x9738f0]
// 007a9ca9  8d0440               lea eax, [eax + eax*2]
// 007a9cac  8d0481               lea eax, [ecx + eax*4]
// 007a9caf  83c40c               add esp, 0xc
// 007a9cb2  c20400               ret 4
// 007a9cb5  8d542410             lea edx, [esp + 0x10]
// 007a9cb9  52                   push edx
// 007a9cba  8d4c2404             lea ecx, [esp + 4]
// 007a9cbe  c744241428498700     mov dword ptr [esp + 0x14], 0x874928
// 007a9cc6  ff15a4288000         call dword ptr [0x8028a4]
// 007a9ccc  687c998d00           push 0x8d997c
// 007a9cd1  8d442404             lea eax, [esp + 4]
// 007a9cd5  50                   push eax
// 007a9cd6  e8b178efff           call 0x6a158c

struct Vertex {
    float x, y, z;
};

struct Exception {
    void* vtable;
    char* message;
    int owned;
};

extern Vertex* vertices;
extern int vertexCount;
extern void (__thiscall *exceptionConstructor)(Exception*, const char* const&);
extern unsigned char exceptionType;

extern "C" __declspec(noreturn)
void __stdcall throwException(void*, void*);

Vertex* __stdcall getVertex(int index)
{
    if (index >= 0 && index < vertexCount)
        return vertices + index;

    Exception error;
    const char*& message = reinterpret_cast<const char*&>(index);
    message = "RBX Mesh::getVertex() index out of range";
    exceptionConstructor(&error, message);
    throwException(&error, &exceptionType);
}
