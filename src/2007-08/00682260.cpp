// from server: 61% by colin
// roc 2007-08 00682260  unit: CXTPCompatibleDC  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00682260
//
// 00682260  7700                 ja 0x682262
// 00682262  e8bceafaff           call 0x630d23
// 00682267  83c404               add esp, 4
// 0068226a  b8588f8c00           mov eax, 0x8c8f58
// 0068226f  c3                   ret 

struct CXTPCompatibleDC {
    void* getSomething();
};

extern "C" void __cdecl helper630d23(void*);

void* CXTPCompatibleDC::getSomething() {
    helper630d23(*(void**)0x8c8f58);
    return (void*)0x8c8f58;
}
