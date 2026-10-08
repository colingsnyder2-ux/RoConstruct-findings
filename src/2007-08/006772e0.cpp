// from server: 93% by colin
// roc 2007-08 006772e0  unit: CXTPCustomizeCommandsPage  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006772e0
//
// 006772e0  83815c010000ff       add dword ptr [ecx + 0x15c], -1
// 006772e7  7517                 jne 0x677300
// 006772e9  f681e400000002       test byte ptr [ecx + 0xe4], 2
// 006772f0  740e                 je 0x677300
// 006772f2  8b01                 mov eax, dword ptr [ecx]
// 006772f4  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 006772fa  6a01                 push 1
// 006772fc  6a00                 push 0
// 006772fe  ffd2                 call edx
// 00677300  c3                   ret 

struct CXTPCustomizeCommandsPage {
    int field_0x0;
    char pad_0x4[0xe0];
    unsigned char field_0xe4;
    char pad_0xe5[0x77];
    int field_0x15c;
    void OnApply();
};

void CXTPCustomizeCommandsPage::OnApply()
{
    if (--field_0x15c == 0 && (field_0xe4 & 2) != 0) {
        void (__stdcall *fn)(int, int) = *(void (__stdcall **)(int, int))((char *)field_0x0 + 0x19c);
        fn(0, 1);
    }
}
