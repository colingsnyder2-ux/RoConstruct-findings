// from server: 12% by colin
// roc 2007-08 006d2bb0  unit: CXTPReportHyperlinks  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2bb0
//
// 006d2bb0  56                   push esi
// 006d2bb1  57                   push edi
// 006d2bb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d2bb6  85ff                 test edi, edi
// 006d2bb8  8bf1                 mov esi, ecx
// 006d2bba  7c2b                 jl 0x6d2be7
// 006d2bbc  8b06                 mov eax, dword ptr [esi]
// 006d2bbe  8b5058               mov edx, dword ptr [eax + 0x58]
// 006d2bc1  ffd2                 call edx
// 006d2bc3  3bf8                 cmp edi, eax
// 006d2bc5  7d20                 jge 0x6d2be7
// 006d2bc7  8b06                 mov eax, dword ptr [esi]
// 006d2bc9  8b5064               mov edx, dword ptr [eax + 0x64]
// 006d2bcc  57                   push edi
// 006d2bcd  8bce                 mov ecx, esi
// 006d2bcf  ffd2                 call edx
// 006d2bd1  85c0                 test eax, eax
// 006d2bd3  7407                 je 0x6d2bdc
// 006d2bd5  8bc8                 mov ecx, eax
// 006d2bd7  e808d6f5ff           call 0x6301e4
// 006d2bdc  6a01                 push 1
// 006d2bde  57                   push edi
// 006d2bdf  8d4e20               lea ecx, [esi + 0x20]
// 006d2be2  e8c9faffff           call 0x6d26b0
// 006d2be7  5f                   pop edi
// 006d2be8  5e                   pop esi
// 006d2be9  c20400               ret 4

struct CXTPReportHyperlinks {
    int field0;
    char pad[0x1c];
    int field20;
    int GetCount();
    int GetAt(int index);
    void RemoveAt(int index);
    void SetHyperlink(int index, int value);

    void func(int index);
};

int CXTPReportHyperlinks::GetCount() {
    return 0;
}

int CXTPReportHyperlinks::GetAt(int index) {
    return 0;
}

void CXTPReportHyperlinks::RemoveAt(int index) {
}

void CXTPReportHyperlinks::SetHyperlink(int index, int value) {
}

void CXTPReportHyperlinks::func(int index) {
    if (index < 0) return;
    if (index >= GetCount()) return;
    int item = GetAt(index);
    if (item != 0) {
        ((void (__thiscall *)(int))0x6301e4)(item);
    }
    SetHyperlink(index, 1);
}
