// from server: 82% by colin
// roc 2007-08 0041fb80  unit: CSelectionTreeCtrl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041fb80
//
// 0041fb80  8b09                 mov ecx, dword ptr [ecx]
// 0041fb82  85c9                 test ecx, ecx
// 0041fb84  7409                 je 0x41fb8f
// 0041fb86  8b01                 mov eax, dword ptr [ecx]
// 0041fb88  8b5004               mov edx, dword ptr [eax + 4]
// 0041fb8b  6a01                 push 1
// 0041fb8d  ffd2                 call edx
// 0041fb8f  c3                   ret 
// 0041fb90  c70144837800         mov dword ptr [ecx], 0x788344
// 0041fb96  c3                   ret 

struct Inner {
    virtual void g();
    virtual void f(int);
};

struct Outer {
    Inner* p;
    void m();
};

void Outer::m()
{
    Inner* q = p;
    if (q != 0) {
        q->f(1);
    }
}
