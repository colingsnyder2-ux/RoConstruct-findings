// from server: 89% by colin
// roc 2007-08 0040b010  unit: CNullDoc  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040b010
//
// 0040b010  56                   push esi
// 0040b011  8bf1                 mov esi, ecx
// 0040b013  57                   push edi
// 0040b014  8dbeb8020000         lea edi, [esi + 0x2b8]
// 0040b01a  6854597800           push 0x785954
// 0040b01f  8bcf                 mov ecx, edi
// 0040b021  ff15b8dc7700         call dword ptr [0x77dcb8]
// 0040b027  85c0                 test eax, eax
// 0040b029  741a                 je 0x40b045
// 0040b02b  6a00                 push 0
// 0040b02d  6a00                 push 0
// 0040b02f  6a00                 push 0
// 0040b031  6a00                 push 0
// 0040b033  6a00                 push 0
// 0040b035  8bcf                 mov ecx, edi
// 0040b037  ff1598dd7700         call dword ptr [0x77dd98]
// 0040b03d  50                   push eax
// 0040b03e  8bce                 mov ecx, esi
// 0040b040  e8114f2200           call 0x62ff56
// 0040b045  5f                   pop edi
// 0040b046  5e                   pop esi
// 0040b047  c3                   ret 

struct CNullDoc {
    char pad[0x2b8];
    int field_2b8;
    void sub_40B010();
};

struct Inner {
    int method1(const char*);
    int method2(int, int, int, int, int);
};

extern "C" void __stdcall sub_62FF56(void*, int);

void CNullDoc::sub_40B010() {
    Inner* p = (Inner*)&field_2b8;
    if (p->method1((const char*)0x785954)) {
        int r = p->method2(0, 0, 0, 0, 0);
        sub_62FF56(this, r);
    }
}
