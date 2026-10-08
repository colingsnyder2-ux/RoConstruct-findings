// from server: 100% by colin
// roc 2007-08 00684550  unit: CXTPPropertyGrid  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00684550
//
// 00684550  56                   push esi
// 00684551  8bf1                 mov esi, ecx
// 00684553  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00684559  8b4834               mov ecx, dword ptr [eax + 0x34]
// 0068455c  8b11                 mov edx, dword ptr [ecx]
// 0068455e  8b4258               mov eax, dword ptr [edx + 0x58]
// 00684561  ffd0                 call eax
// 00684563  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 00684569  8b11                 mov edx, dword ptr [ecx]
// 0068456b  8b4234               mov eax, dword ptr [edx + 0x34]
// 0068456e  ffd0                 call eax
// 00684570  8bce                 mov ecx, esi
// 00684572  5e                   pop esi
// 00684573  e9a8f8ffff           jmp 0x683e20

struct CXTPPropertyGrid {
    void sub_683E20();
    void func_684550();
};

void CXTPPropertyGrid::func_684550()
{
    int* p = *(int**)((char*)this + 0x13c);
    int* q = *(int**)((char*)p + 0x34);
    void (__thiscall *f1)(void*) = *(void (__thiscall **)(void*))((char*)*(int**)q + 0x58);
    f1(q);
    int* r = *(int**)((char*)this + 0x13c);
    void (__thiscall *f2)(void*) = *(void (__thiscall **)(void*))((char*)*(int**)r + 0x34);
    f2(r);
    sub_683E20();
}
