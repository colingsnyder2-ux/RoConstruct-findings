// from server: 55% by colin
// roc 2007-08 00448760  unit: CRbxDocTemplate  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00448760
//
// 00448760  56                   push esi
// 00448761  8bf1                 mov esi, ecx
// 00448763  6a01                 push 1
// 00448765  b980bd8b00           mov ecx, 0x8bbd80
// 0044876a  e8b1f9ffff           call 0x448120
// 0044876f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00448773  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00448777  50                   push eax
// 00448778  51                   push ecx
// 00448779  8bce                 mov ecx, esi
// 0044877b  e816801e00           call 0x630796
// 00448780  5e                   pop esi
// 00448781  c20800               ret 8

struct CRbxDocTemplate {
    void sub_448760(int, int);
};

extern void sub_448120(int);
extern void sub_630796();

void CRbxDocTemplate::sub_448760(int a, int b) {
    sub_448120(1);
    sub_630796();
}
