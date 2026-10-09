// from server: 86% by colin
// roc 2007-08 006457e0  unit: CXTPCommandBarList  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006457e0
//
// 006457e0  56                   push esi
// 006457e1  57                   push edi
// 006457e2  8bf9                 mov edi, ecx
// 006457e4  33f6                 xor esi, esi
// 006457e6  e8555de3ff           call 0x47b540
// 006457eb  85c0                 test eax, eax
// 006457ed  7e1e                 jle 0x64580d
// 006457ef  90                   nop 
// 006457f0  56                   push esi
// 006457f1  8bcf                 mov ecx, edi
// 006457f3  e828b3deff           call 0x430b20
// 006457f8  8bc8                 mov ecx, eax
// 006457fa  e8e5a9feff           call 0x6301e4
// 006457ff  8bcf                 mov ecx, edi
// 00645801  83c601               add esi, 1
// 00645804  e8375de3ff           call 0x47b540
// 00645809  3bf0                 cmp esi, eax
// 0064580b  7ce3                 jl 0x6457f0
// 0064580d  6aff                 push -1
// 0064580f  6a00                 push 0
// 00645811  8d4f24               lea ecx, [edi + 0x24]
// 00645814  e897a20b00           call 0x6ffab0
// 00645819  5f                   pop edi
// 0064581a  5e                   pop esi
// 0064581b  c3                   ret 

struct CXTPCommandBarList {
    int GetCount();
    void* GetAt(int index);
    void RemoveAll();
    char pad[0x24];
};

extern "C" void __stdcall sub_6301E4(void*);
extern "C" void __stdcall sub_6FFAB0(void*, int, int);

void CXTPCommandBarList::RemoveAll() {
    int i = 0;
    while (i < GetCount()) {
        void* p = GetAt(i);
        sub_6301E4(p);
        i++;
    }
    sub_6FFAB0((char*)this + 0x24, 0, -1);
}
