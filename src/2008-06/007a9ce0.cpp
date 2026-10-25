// from server: 100% by king_originala
// roc 2008-06 007a9ce0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a9ce0
//
// 007a9ce0  8b442404             mov eax, dword ptr [esp + 4]
// 007a9ce4  83ec0c               sub esp, 0xc
// 007a9ce7  85c0                 test eax, eax
// 007a9ce9  7c1a                 jl 0x7a9d05
// 007a9ceb  3b0500399700         cmp eax, dword ptr [0x973900]
// 007a9cf1  7d12                 jge 0x7a9d05
// 007a9cf3  8b0dfc389700         mov ecx, dword ptr [0x9738fc]
// 007a9cf9  8d0440               lea eax, [eax + eax*2]
// 007a9cfc  8d0481               lea eax, [ecx + eax*4]
// 007a9cff  83c40c               add esp, 0xc
// 007a9d02  c20400               ret 4
// 007a9d05  8d542410             lea edx, [esp + 0x10]
// 007a9d09  52                   push edx
// 007a9d0a  8d4c2404             lea ecx, [esp + 4]
// 007a9d0e  c744241454498700     mov dword ptr [esp + 0x14], 0x874954
// 007a9d16  ff15a4288000         call dword ptr [0x8028a4]
// 007a9d1c  687c998d00           push 0x8d997c
// 007a9d21  8d442404             lea eax, [esp + 4]
// 007a9d25  50                   push eax
// 007a9d26  e86178efff           call 0x6a158c

struct Normal {
    float x, y, z;
};

struct ExceptionObject {
    void* vtable;
    const char* message;
    int owned;
};

extern Normal* normals;
extern int normalCount;

typedef void (__thiscall *ExceptionConstructor)(
    ExceptionObject*, const char* const&);

extern ExceptionConstructor constructException;
extern unsigned char exceptionTypeInfo;

extern "C" __declspec(noreturn) void __stdcall
throwException(void*, void*);

Normal* __stdcall getNormal(int index)
{
    if (index >= 0 && index < normalCount)
        return normals + index;

    ExceptionObject error;
    index = reinterpret_cast<int>("RBX Mesh::getNormal() index out of range");
    constructException(
        &error, *reinterpret_cast<const char* const*>(&index));
    throwException(&error, &exceptionTypeInfo);
}
