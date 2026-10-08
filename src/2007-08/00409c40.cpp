// from server: 70% by colin
// roc 2007-08 00409c40  unit: VCApp::?$CComObject  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00409c40
//
// 00409c40  8b442404             mov eax, dword ptr [esp + 4]
// 00409c44  834028ff             add dword ptr [eax + 0x28], -1
// 00409c48  56                   push esi
// 00409c49  8b7028               mov esi, dword ptr [eax + 0x28]
// 00409c4c  7510                 jne 0x409c5e
// 00409c4e  85c0                 test eax, eax
// 00409c50  740c                 je 0x409c5e
// 00409c52  8d481c               lea ecx, [eax + 0x1c]
// 00409c55  8b01                 mov eax, dword ptr [ecx]
// 00409c57  8b5014               mov edx, dword ptr [eax + 0x14]
// 00409c5a  6a01                 push 1
// 00409c5c  ffd2                 call edx
// 00409c5e  8bc6                 mov eax, esi
// 00409c60  5e                   pop esi
// 00409c61  c20400               ret 4

struct VCApp_CComObject
{
    int Release(int);
};

int VCApp_CComObject::Release(int)
{
    int* p = *(int**)((char*)this + 4);
    p[10] -= 1;
    int result = p[10];
    if (result == 0)
    {
        if (p != 0)
        {
            int* vtbl = *(int**)((char*)p + 0x1c);
            void (__stdcall *fn)(int) = *(void (__stdcall**)(int))((char*)vtbl + 0x14);
            fn(1);
        }
    }
    return result;
}
