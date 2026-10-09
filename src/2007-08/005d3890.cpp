// from server: 32% by colin
// roc 2007-08 005d3890  unit: RBX::Tool  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d3890
//
// 005d3890  c70000000000         mov dword ptr [eax], 0
// 005d3896  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005d389e  89642430             mov dword ptr [esp + 0x30], esp
// 005d38a2  8911                 mov dword ptr [ecx], edx
// 005d38a4  8b542420             mov edx, dword ptr [esp + 0x20]
// 005d38a8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005d38ac  52                   push edx
// 005d38ad  50                   push eax
// 005d38ae  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005d38b3  e8a8d4fbff           call 0x590d60
// 005d38b8  50                   push eax
// 005d38b9  8bce                 mov ecx, esi
// 005d38bb  c644242000           mov byte ptr [esp + 0x20], 0
// 005d38c0  e89bf5e6ff           call 0x442e60
// 005d38c5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005d38c9  51                   push ecx
// 005d38ca  e893c30500           call 0x62fc62
// 005d38cf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d38d3  83c404               add esp, 4
// 005d38d6  c7064cb37b00         mov dword ptr [esi], 0x7bb34c
// 005d38dc  8bc6                 mov eax, esi
// 005d38de  64890d00000000       mov dword ptr fs:[0], ecx
// 005d38e5  5e                   pop esi
// 005d38e6  83c40c               add esp, 0xc
// 005d38e9  c22400               ret 0x24

struct Tool {
    void construct();
};

extern "C" void* __stdcall sub_590d60(int, int);
extern "C" void __cdecl sub_442e60(void*, void*);
extern "C" void __cdecl sub_62fc62(void*);

void Tool::construct() {
    *(int*)0 = 0;
    *(int*)((char*)this) = 0;
    void* p = sub_590d60(0, 0);
    sub_442e60(this, p);
    sub_62fc62(p);
    *(int*)this = 0x7bb34c;
}
