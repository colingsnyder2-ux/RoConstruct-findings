// from server: 56% by colin
// roc 2007-08 005244f0  unit: G3D::Line  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005244f0
//
// 005244f0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005244f4  56                   push esi
// 005244f5  57                   push edi
// 005244f6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005244fa  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 005244fd  6a00                 push 0
// 005244ff  50                   push eax
// 00524500  51                   push ecx
// 00524501  ff15f8e87700         call dword ptr [0x77e8f8]
// 00524507  8b742418             mov esi, dword ptr [esp + 0x18]
// 0052450b  83c40c               add esp, 0xc
// 0052450e  85c0                 test eax, eax
// 00524510  7413                 je 0x524525
// 00524512  8b16                 mov edx, dword ptr [esi]
// 00524514  c7421441000000       mov dword ptr [edx + 0x14], 0x41
// 0052451b  8b06                 mov eax, dword ptr [esi]
// 0052451d  8b08                 mov ecx, dword ptr [eax]
// 0052451f  56                   push esi
// 00524520  ffd1                 call ecx
// 00524522  83c404               add esp, 4
// 00524525  8b570c               mov edx, dword ptr [edi + 0xc]
// 00524528  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0052452c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00524530  52                   push edx
// 00524531  57                   push edi
// 00524532  6a01                 push 1
// 00524534  50                   push eax
// 00524535  ff1500e97700         call dword ptr [0x77e900]
// 0052453b  83c410               add esp, 0x10
// 0052453e  3bc7                 cmp eax, edi
// 00524540  7413                 je 0x524555
// 00524542  8b0e                 mov ecx, dword ptr [esi]
// 00524544  c7411440000000       mov dword ptr [ecx + 0x14], 0x40
// 0052454b  8b16                 mov edx, dword ptr [esi]
// 0052454d  8b02                 mov eax, dword ptr [edx]
// 0052454f  56                   push esi
// 00524550  ffd0                 call eax
// 00524552  83c404               add esp, 4
// 00524555  5f                   pop edi
// 00524556  5e                   pop esi
// 00524557  c3                   ret 

struct Line {
    char pad[0x0c];
    void* m_pFile;
    int Intersect(void* src, void* sect);
};

extern "C" int __cdecl fread(void*, int, int, void*);
extern "C" int __cdecl fseek(void*, int, int);

int Line::Intersect(void* src, void* sect)
{
    int result = fread(*(void**)((char*)this + 0x0c), *(int*)((char*)sect + 0x10), 1, 0);
    if (result != 0) {
        *(int*)(*(char**)src + 0x14) = 0x41;
        (*(void(__thiscall**)(void*))**(char***)src)(src);
    }
    int r2 = fseek(*(void**)((char*)this + 0x0c), *(int*)((char*)sect + 0x14), 1);
    if (r2 != *(int*)((char*)sect + 0x1c)) {
        *(int*)(*(char**)src + 0x14) = 0x40;
        (*(void(__thiscall**)(void*))**(char***)src)(src);
    }
    return 0;
}
