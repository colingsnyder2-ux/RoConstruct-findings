// from server: 64% by colin
// roc 2007-08 00717730  unit: CXTPRibbonControlTab  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00717730
//
// 00717730  8b442404             mov eax, dword ptr [esp + 4]
// 00717734  57                   push edi
// 00717735  8bf9                 mov edi, ecx
// 00717737  398704020000         cmp dword ptr [edi + 0x204], eax
// 0071773d  743f                 je 0x71777e
// 0071773f  85c0                 test eax, eax
// 00717741  898704020000         mov dword ptr [edi + 0x204], eax
// 00717747  742c                 je 0x717775
// 00717749  83bf7c01000000       cmp dword ptr [edi + 0x17c], 0
// 00717750  7523                 jne 0x717775
// 00717752  53                   push ebx
// 00717753  8b9f78010000         mov ebx, dword ptr [edi + 0x178]
// 00717759  56                   push esi
// 0071775a  8db778010000         lea esi, [edi + 0x178]
// 00717760  6a01                 push 1
// 00717762  6aff                 push -1
// 00717764  8bce                 mov ecx, esi
// 00717766  e8d571feff           call 0x6fe940
// 0071776b  50                   push eax
// 0071776c  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0071776f  8bce                 mov ecx, esi
// 00717771  ffd0                 call eax
// 00717773  5e                   pop esi
// 00717774  5b                   pop ebx
// 00717775  6a01                 push 1
// 00717777  8bcf                 mov ecx, edi
// 00717779  e8122ff2ff           call 0x63a690
// 0071777e  5f                   pop edi
// 0071777f  c20400               ret 4

struct CXTPRibbonControlTab {
    char pad[0x178];
    int field_178;
    char pad2[0x204 - 0x17c];
    int field_204;
    void SetCurSel(int n);
};

extern "C" int __stdcall sub_6fe940(int, int);
extern "C" void __stdcall sub_63a690(int);

void CXTPRibbonControlTab::SetCurSel(int n)
{
    if (field_204 == n)
        return;
    field_204 = n;
    if (n == 0)
        goto skip;
    if (*(int*)((char*)this + 0x17c) != 0)
        goto skip;
    {
        int* p = (int*)((char*)this + 0x178);
        int v = *p;
        int r = sub_6fe940(-1, 1);
        ((void (__thiscall*)(void*, int))*(void**)(v + 0x20))(p, r);
    }
skip:
    sub_63a690(1);
}
