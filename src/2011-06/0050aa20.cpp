// from server: 100% by tester
// roc 2011-06 0050aa20  unit: RBX::Network::Replicator  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050aa20
//
// 0050aa20  8b01                 mov eax, dword ptr [ecx]
// 0050aa22  8b542404             mov edx, dword ptr [esp + 4]
// 0050aa26  8b4070               mov eax, dword ptr [eax + 0x70]
// 0050aa29  52                   push edx
// 0050aa2a  ffd0                 call eax
// 0050aa2c  c20800               ret 8

struct Replicator {
    void f(int, int);
};

void Replicator::f(int a, int b) {
    void (__thiscall *fn)(Replicator*, int);
    fn = *(void (__thiscall **)(Replicator*, int))(*(int*)this + 0x70);
    fn(this, a);
}