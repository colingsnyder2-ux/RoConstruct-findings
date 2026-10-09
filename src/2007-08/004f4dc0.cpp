// from server: 100% by colin
// roc 2007-08 004f4dc0  unit: boost::bad_lexical_cast  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f4dc0
//
// 004f4dc0  56                   push esi
// 004f4dc1  57                   push edi
// 004f4dc2  8bf1                 mov esi, ecx
// 004f4dc4  33ff                 xor edi, edi
// 004f4dc6  397e04               cmp dword ptr [esi + 4], edi
// 004f4dc9  7e1a                 jle 0x4f4de5
// 004f4dcb  53                   push ebx
// 004f4dcc  33db                 xor ebx, ebx
// 004f4dce  8bff                 mov edi, edi
// 004f4dd0  8b0e                 mov ecx, dword ptr [esi]
// 004f4dd2  03cb                 add ecx, ebx
// 004f4dd4  e887f2ffff           call 0x4f4060
// 004f4dd9  83c701               add edi, 1
// 004f4ddc  83c318               add ebx, 0x18
// 004f4ddf  3b7e04               cmp edi, dword ptr [esi + 4]
// 004f4de2  7cec                 jl 0x4f4dd0
// 004f4de4  5b                   pop ebx
// 004f4de5  8b06                 mov eax, dword ptr [esi]
// 004f4de7  50                   push eax
// 004f4de8  e823aa0000           call 0x4ff810
// 004f4ded  83c404               add esp, 4
// 004f4df0  5f                   pop edi
// 004f4df1  c70600000000         mov dword ptr [esi], 0
// 004f4df7  c7460400000000       mov dword ptr [esi + 4], 0
// 004f4dfe  c7460800000000       mov dword ptr [esi + 8], 0
// 004f4e05  5e                   pop esi
// 004f4e06  c3                   ret 

struct S {
    int* begin;
    int count;
    int capacity;
    void f();
};

extern void __fastcall destroy_element(void*);
extern void __cdecl free_mem(void*);

void S::f()
{
    int i = 0;
    if (count > 0) {
        int offset = 0;
        do {
            destroy_element((char*)begin + offset);
            i++;
            offset += 0x18;
        } while (i < count);
    }
    free_mem(begin);
    begin = 0;
    count = 0;
    capacity = 0;
}
