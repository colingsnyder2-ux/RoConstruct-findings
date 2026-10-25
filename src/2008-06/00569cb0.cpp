// from server: 100% by king_originala
// roc 2008-06 00569cb0  unit: RBX::StandardOut  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00569cb0
//
// 00569cb0  57                   push edi
// 00569cb1  8bf9                 mov edi, ecx
// 00569cb3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00569cb7  85c9                 test ecx, ecx
// 00569cb9  750a                 jne 0x569cc5
// 00569cbb  6805400080           push 0x80004005
// 00569cc0  e83b73e9ff           call 0x401000
// 00569cc5  53                   push ebx
// 00569cc6  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00569cca  56                   push esi
// 00569ccb  8b742414             mov esi, dword ptr [esp + 0x14]
// 00569ccf  85db                 test ebx, ebx
// 00569cd1  750e                 jne 0x569ce1
// 00569cd3  85f6                 test esi, esi
// 00569cd5  740a                 je 0x569ce1
// 00569cd7  6857000780           push 0x80070057
// 00569cdc  e81f73e9ff           call 0x401000
// 00569ce1  8b01                 mov eax, dword ptr [ecx]
// 00569ce3  8b10                 mov edx, dword ptr [eax]
// 00569ce5  6a01                 push 1
// 00569ce7  56                   push esi
// 00569ce8  ffd2                 call edx
// 00569cea  85c0                 test eax, eax
// 00569cec  7505                 jne 0x569cf3
// 00569cee  e8bdc9e9ff           call 0x4066b0
// 00569cf3  83c010               add eax, 0x10
// 00569cf6  8907                 mov dword ptr [edi], eax
// 00569cf8  85f6                 test esi, esi
// 00569cfa  7cdb                 jl 0x569cd7
// 00569cfc  3b70f8               cmp esi, dword ptr [eax - 8]
// 00569cff  7fd6                 jg 0x569cd7
// 00569d01  8970f4               mov dword ptr [eax - 0xc], esi
// 00569d04  8b07                 mov eax, dword ptr [edi]
// 00569d06  56                   push esi
// 00569d07  53                   push ebx
// 00569d08  c6040600             mov byte ptr [esi + eax], 0
// 00569d0c  8b0f                 mov ecx, dword ptr [edi]
// 00569d0e  56                   push esi
// 00569d0f  51                   push ecx
// 00569d10  ff15ac288000         call dword ptr [0x8028ac]
// 00569d16  83c410               add esp, 0x10
// 00569d19  5e                   pop esi
// 00569d1a  5b                   pop ebx
// 00569d1b  8bc7                 mov eax, edi
// 00569d1d  5f                   pop edi
// 00569d1e  c20c00               ret 0xc

namespace ATL {
__declspec(noreturn) void __stdcall AtlThrowImpl(long);
}

__declspec(noreturn) void __cdecl allocation_failure();

extern "C" int (__cdecl *memcpy_s)(
    void*, unsigned int, const void*, unsigned int);

struct StringData {
    void* manager;
    int length;
    int capacity;
    long references;
};

struct StringManager {
    virtual StringData* Allocate(int length, int characterSize);
};

struct S {
    char* data;
    S(const char* source, int length, StringManager* manager);
};

S::S(const char* source, int length, StringManager* manager)
{
    if (!manager)
        ATL::AtlThrowImpl(0x80004005L);

    if (!source && length != 0)
        ATL::AtlThrowImpl(0x80070057L);

    StringData* allocation = manager->Allocate(length, 1);
    if (!allocation)
        allocation_failure();

    data = reinterpret_cast<char*>(allocation + 1);

    if (length < 0 ||
        length > (reinterpret_cast<StringData*>(data) - 1)->capacity)
        ATL::AtlThrowImpl(0x80070057L);

    (reinterpret_cast<StringData*>(data) - 1)->length = length;
    data[length] = 0;
    memcpy_s(data, length, source, length);
}
