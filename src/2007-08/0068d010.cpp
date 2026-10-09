// from server: 8% by colin
// roc 2007-08 0068d010  unit: CXTPTabClientWnd  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068d010
//
// 0068d010  56                   push esi
// 0068d011  8bf1                 mov esi, ecx
// 0068d013  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0068d01a  743a                 je 0x68d056
// 0068d01c  57                   push edi
// 0068d01d  33ff                 xor edi, edi
// 0068d01f  e8fc7edeff           call 0x474f20
// 0068d024  85c0                 test eax, eax
// 0068d026  7e2d                 jle 0x68d055
// 0068d028  53                   push ebx
// 0068d029  83cbff               or ebx, 0xffffffff
// 0068d02c  55                   push ebp
// 0068d02d  0beb                 or ebp, ebx
// 0068d02f  90                   nop 
// 0068d030  8b4620               mov eax, dword ptr [esi + 0x20]
// 0068d033  55                   push ebp
// 0068d034  53                   push ebx
// 0068d035  50                   push eax
// 0068d036  57                   push edi
// 0068d037  8bce                 mov ecx, esi
// 0068d039  e8a2edffff           call 0x68bde0
// 0068d03e  8bc8                 mov ecx, eax
// 0068d040  e8ab1b0700           call 0x6febf0
// 0068d045  8bce                 mov ecx, esi
// 0068d047  83c701               add edi, 1
// 0068d04a  e8d17edeff           call 0x474f20
// 0068d04f  3bf8                 cmp edi, eax
// 0068d051  7cdd                 jl 0x68d030
// 0068d053  5d                   pop ebp
// 0068d054  5b                   pop ebx
// 0068d055  5f                   pop edi
// 0068d056  5e                   pop esi
// 0068d057  c3                   ret 

struct CXTPTabClientWnd {
    int field_0x20;
    char pad_0x24[0x90];
    int field_0xb4;
    int GetCount();
    int GetItem(int index);
    void DoSomething(int a, int b, int c, int d);

    void Method();
};

extern "C" int __stdcall sub_6febf0(int);

int CXTPTabClientWnd::GetCount() {
    return 0;
}

int CXTPTabClientWnd::GetItem(int index) {
    return 0;
}

void CXTPTabClientWnd::DoSomething(int a, int b, int c, int d) {
}

void CXTPTabClientWnd::Method() {
    if (this->field_0xb4 != 0) {
        int i = 0;
        int count = this->GetCount();
        while (i < count) {
            int item = this->GetItem(i);
            sub_6febf0(item);
            i++;
            count = this->GetCount();
        }
    }
}
