// from server: 57% by colin
// roc 2007-08 0041dcf0  unit: CInstanceExplorer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041dcf0
//
// 0041dcf0  53                   push ebx
// 0041dcf1  55                   push ebp
// 0041dcf2  56                   push esi
// 0041dcf3  57                   push edi
// 0041dcf4  8be9                 mov ebp, ecx
// 0041dcf6  e8f5531100           call 0x5330f0
// 0041dcfb  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0041dcff  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 0041dd05  8b742418             mov esi, dword ptr [esp + 0x18]
// 0041dd09  8da42400000000       lea esp, [esp]
// 0041dd10  85ff                 test edi, edi
// 0041dd12  7406                 je 0x41dd1a
// 0041dd14  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0041dd18  7402                 je 0x41dd1c
// 0041dd1a  ffd3                 call ebx
// 0041dd1c  3b742420             cmp esi, dword ptr [esp + 0x20]
// 0041dd20  7423                 je 0x41dd45
// 0041dd22  85ff                 test edi, edi
// 0041dd24  7502                 jne 0x41dd28
// 0041dd26  ffd3                 call ebx
// 0041dd28  3b7708               cmp esi, dword ptr [edi + 8]
// 0041dd2b  7202                 jb 0x41dd2f
// 0041dd2d  ffd3                 call ebx
// 0041dd2f  8b06                 mov eax, dword ptr [esi]
// 0041dd31  50                   push eax
// 0041dd32  8bcd                 mov ecx, ebp
// 0041dd34  e817521100           call 0x532f50
// 0041dd39  3b7708               cmp esi, dword ptr [edi + 8]
// 0041dd3c  7202                 jb 0x41dd40
// 0041dd3e  ffd3                 call ebx
// 0041dd40  83c604               add esi, 4
// 0041dd43  ebcb                 jmp 0x41dd10
// 0041dd45  5f                   pop edi
// 0041dd46  5e                   pop esi
// 0041dd47  5d                   pop ebp
// 0041dd48  5b                   pop ebx
// 0041dd49  c21000               ret 0x10

extern "C" void __stdcall _invalid_parameter_noinfo();

struct CInstanceExplorer {
    void func1();
    void func2(int);
    void func3(int, int, int, int);
};

void CInstanceExplorer::func3(int a, int b, int c, int d) {
    func1();
    int* p = (int*)a;
    int* q = (int*)b;
    while (q != (int*)d) {
        if (p == 0 || p != (int*)c) {
            _invalid_parameter_noinfo();
        }
        if (q != (int*)d) {
            if (p == 0) {
                _invalid_parameter_noinfo();
            }
            if ((unsigned)q >= (unsigned)p[2]) {
                _invalid_parameter_noinfo();
            }
            func2(*q);
            if ((unsigned)q >= (unsigned)p[2]) {
                _invalid_parameter_noinfo();
            }
            q++;
        }
    }
}
