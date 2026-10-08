// from server: 50% by colin
// roc 2007-08 00461610  unit: seg_00460000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00461610
//
// 00461610  8b542408             mov edx, dword ptr [esp + 8]
// 00461614  81fa74128c00         cmp edx, 0x8c1274
// 0046161a  7408                 je 0x461624
// 0046161c  81fabc148c00         cmp edx, 0x8c14bc
// 00461622  7518                 jne 0x46163c
// 00461624  83ec08               sub esp, 8
// 00461627  8bc4                 mov eax, esp
// 00461629  8910                 mov dword ptr [eax], edx
// 0046162b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0046162f  895004               mov dword ptr [eax + 4], edx
// 00461632  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00461636  50                   push eax
// 00461637  e8d4feffff           call 0x461510
// 0046163c  c20c00               ret 0xc

extern "C" int __cdecl sub_461510(int, int, int);

struct CScriptEditor {
    int sub_461610(int, int, int);
};

int CScriptEditor::sub_461610(int a, int b, int c) {
    if (b == 0x8c1274 || b == 0x8c14bc) {
        int local[2];
        local[0] = b;
        local[1] = c;
        return sub_461510(a, local[0], local[1]);
    }
    return 0;
}
