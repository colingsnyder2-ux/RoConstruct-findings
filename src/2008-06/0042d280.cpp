// from server: 100% by king_originala
// roc 2008-06 0042d280  unit: boost::any::H::?$holder  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042d280
//
// 0042d280  56                   push esi
// 0042d281  8bf1                 mov esi, ecx
// 0042d283  e838f91300           call 0x56cbc0
// 0042d288  6a08                 push 8
// 0042d28a  8906                 mov dword ptr [esi], eax
// 0042d28c  e88f362700           call 0x6a0920
// 0042d291  83c404               add esp, 4
// 0042d294  85c0                 test eax, eax
// 0042d296  7418                 je 0x42d2b0
// 0042d298  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042d29c  c700cc068100         mov dword ptr [eax], 0x8106cc
// 0042d2a2  8b11                 mov edx, dword ptr [ecx]
// 0042d2a4  895004               mov dword ptr [eax + 4], edx
// 0042d2a7  894604               mov dword ptr [esi + 4], eax
// 0042d2aa  8bc6                 mov eax, esi
// 0042d2ac  5e                   pop esi
// 0042d2ad  c20400               ret 4
// 0042d2b0  33c0                 xor eax, eax
// 0042d2b2  894604               mov dword ptr [esi + 4], eax
// 0042d2b5  8bc6                 mov eax, esi
// 0042d2b7  5e                   pop esi
// 0042d2b8  c20400               ret 4

extern "C" int __cdecl sub_56cbc0();
extern "C" void* __cdecl sub_6a0920(unsigned int);
extern const int holder_vtable[];

struct Holder {
    int field0;
    void* field4;
    Holder* init(void* arg);
};

Holder* Holder::init(void* arg) {
    field0 = sub_56cbc0();
    void* p = sub_6a0920(8);
    if (p != 0) {
        *(const int**)p = holder_vtable;
        *(int*)((char*)p + 4) = *(int*)arg;
    } else {
        p = 0;
    }
    field4 = p;
    return this;
}
