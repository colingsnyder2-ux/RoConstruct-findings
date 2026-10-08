// from server: 100% by colin
// roc 2007-08 00576620  unit: RBX::VPartInstance::?$Notifier  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00576620
//
// 00576620  8d817cfdffff         lea eax, [ecx - 0x284]
// 00576626  c3                   ret 

struct S {
    char* f();
};

char* S::f() {
    return reinterpret_cast<char*>(this) - 0x284;
}
