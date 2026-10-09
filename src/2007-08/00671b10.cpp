// from server: 81% by colin
// roc 2007-08 00671b10  unit: CPropertyGridItemBrickColor  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671b10
//
// 00671b10  8b542408             mov edx, dword ptr [esp + 8]
// 00671b14  83ec28               sub esp, 0x28
// 00671b17  56                   push esi
// 00671b18  8d442404             lea eax, [esp + 4]
// 00671b1c  50                   push eax
// 00671b1d  52                   push edx
// 00671b1e  e8edf6ffff           call 0x671210
// 00671b23  85c0                 test eax, eax
// 00671b25  7419                 je 0x671b40
// 00671b27  8b742430             mov esi, dword ptr [esp + 0x30]
// 00671b2b  8d442408             lea eax, [esp + 8]
// 00671b2f  50                   push eax
// 00671b30  56                   push esi
// 00671b31  ff15e0ed7700         call dword ptr [0x77ede0]
// 00671b37  8bc6                 mov eax, esi
// 00671b39  5e                   pop esi
// 00671b3a  83c428               add esp, 0x28
// 00671b3d  c20800               ret 8
// 00671b40  8b35b8ed7700         mov esi, dword ptr [0x77edb8]
// 00671b46  57                   push edi
// 00671b47  6a01                 push 1
// 00671b49  ffd6                 call esi
// 00671b4b  6a00                 push 0
// 00671b4d  8bf8                 mov edi, eax
// 00671b4f  ffd6                 call esi
// 00671b51  8bc8                 mov ecx, eax
// 00671b53  8b442434             mov eax, dword ptr [esp + 0x34]
// 00671b57  89780c               mov dword ptr [eax + 0xc], edi
// 00671b5a  5f                   pop edi
// 00671b5b  c70000000000         mov dword ptr [eax], 0
// 00671b61  c7400400000000       mov dword ptr [eax + 4], 0
// 00671b68  894808               mov dword ptr [eax + 8], ecx
// 00671b6b  5e                   pop esi
// 00671b6c  83c428               add esp, 0x28
// 00671b6f  c20800               ret 8

struct CPropertyGridItemBrickColor {
    int unknown0;
    int unknown4;
    int unknown8;
    int unknownC;
};

extern "C" int __stdcall sub_671210(int, void*);
extern "C" int (__stdcall *GetSystemMetrics)(int);
extern "C" void (__stdcall *CopyRect)(void*, const void*);

int __stdcall sub_671b10(int a1, CPropertyGridItemBrickColor* a2)
{
    int rect[4];
    if (sub_671210(a1, rect))
    {
        CopyRect(a2, rect);
        return (int)a2;
    }
    int v1 = GetSystemMetrics(1);
    int v2 = GetSystemMetrics(0);
    a2->unknownC = v1;
    a2->unknown0 = 0;
    a2->unknown4 = 0;
    a2->unknown8 = v2;
    return (int)a2;
}
