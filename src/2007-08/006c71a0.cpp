// from server: 100% by colin
// roc 2007-08 006c71a0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c71a0
//
// 006c71a0  8b442404             mov eax, dword ptr [esp + 4]
// 006c71a4  85c0                 test eax, eax
// 006c71a6  8981fc000000         mov dword ptr [ecx + 0xfc], eax
// 006c71ac  7516                 jne 0x6c71c4
// 006c71ae  8b8968010000         mov ecx, dword ptr [ecx + 0x168]
// 006c71b4  85c9                 test ecx, ecx
// 006c71b6  740c                 je 0x6c71c4
// 006c71b8  394120               cmp dword ptr [ecx + 0x20], eax
// 006c71bb  7407                 je 0x6c71c4
// 006c71bd  8b01                 mov eax, dword ptr [ecx]
// 006c71bf  8b5068               mov edx, dword ptr [eax + 0x68]
// 006c71c2  ffd2                 call edx
// 006c71c4  c20400               ret 4

struct CXTPCustomizeSheet_CCustomizeEdit {
    void SetSomething(int* p);
};

void CXTPCustomizeSheet_CCustomizeEdit::SetSomething(int* p)
{
    *(int**)((char*)this + 0xfc) = p;
    if (p == 0) {
        int* q = *(int**)((char*)this + 0x168);
        if (q != 0 && *(int*)((char*)q + 0x20) != 0) {
            (*(void (__thiscall**)(int*))(*(int*)q + 0x68))(q);
        }
    }
}
