// from server: 97% by colin
// roc 2007-08 0045de30  unit: Scintilla::CScintillaFindReplaceDlg  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045de30
//
// 0045de30  56                   push esi
// 0045de31  57                   push edi
// 0045de32  8bf1                 mov esi, ecx
// 0045de34  e8e5251d00           call 0x63041e
// 0045de39  6812040000           push 0x412
// 0045de3e  8bce                 mov ecx, esi
// 0045de40  8bf8                 mov edi, eax
// 0045de42  e8232b1d00           call 0x63096a
// 0045de47  8b8e9c010000         mov ecx, dword ptr [esi + 0x19c]
// 0045de4d  8b5020               mov edx, dword ptr [eax + 0x20]
// 0045de50  6a00                 push 0
// 0045de52  51                   push ecx
// 0045de53  68f1000000           push 0xf1
// 0045de58  52                   push edx
// 0045de59  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045de5f  8bc7                 mov eax, edi
// 0045de61  5f                   pop edi
// 0045de62  5e                   pop esi
// 0045de63  c3                   ret 

struct Scintilla_CScintillaFindReplaceDlg {
    char pad0[0x19c];
    unsigned int hwnd;
    unsigned int method1();
    unsigned int method2(unsigned int);
    unsigned int run();
};

extern "C" unsigned int __stdcall SendMessageA(unsigned int, unsigned int, unsigned int, unsigned int);

unsigned int Scintilla_CScintillaFindReplaceDlg::run() {
    unsigned int a = method1();
    unsigned int b = method2(0x412);
    unsigned int c = *(unsigned int*)((char*)this + 0x19c);
    unsigned int d = *(unsigned int*)((char*)b + 0x20);
    SendMessageA(d, 0xf1, c, 0);
    return a;
}
