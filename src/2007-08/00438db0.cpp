// from server: 53% by colin
// roc 2007-08 00438db0  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00438db0
//
// 00438db0  8b542404             mov edx, dword ptr [esp + 4]
// 00438db4  8b01                 mov eax, dword ptr [ecx]
// 00438db6  8b12                 mov edx, dword ptr [edx]
// 00438db8  8b80e8000000         mov eax, dword ptr [eax + 0xe8]
// 00438dbe  89542404             mov dword ptr [esp + 4], edx
// 00438dc2  ffe0                 jmp eax

struct S {
    void f(void*);
};

void S::f(void* arg) {
    void* p = *(void**)arg;
    void (*fn)(void*) = *(void (**)(void*))((*(char**)this) + 0xe8);
    fn(p);
}
