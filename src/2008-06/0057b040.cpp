// from server: 100% by king_originala
// roc 2008-06 0057b040  unit: RBX::DataModel  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057b040
//
// 0057b040  8b442404             mov eax, dword ptr [esp + 4]
// 0057b044  56                   push esi
// 0057b045  50                   push eax
// 0057b046  8bf1                 mov esi, ecx
// 0057b048  e85376ffff           call 0x5726a0
// 0057b04d  8b96f0010000         mov edx, dword ptr [esi + 0x1f0]
// 0057b053  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 0057b059  5e                   pop esi
// 0057b05a  c744240401000000     mov dword ptr [esp + 4], 1
// 0057b062  8b02                 mov eax, dword ptr [edx]
// 0057b064  ffe0                 jmp eax

struct Receiver {
    virtual void set(int);
};

struct S {
    char storage[0x1f4];

    void notify(void*);
    void f(void*);
};

void S::f(void* p)
{
    notify(p);
    reinterpret_cast<Receiver*>(storage + 0x1f0)->set(1);
}
