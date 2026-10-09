// from server: 71% by colin
// roc 2007-08 004b9600  unit: RakPeer  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9600
//
// 004b9600  56                   push esi
// 004b9601  8bf1                 mov esi, ecx
// 004b9603  8b4604               mov eax, dword ptr [esi + 4]
// 004b9606  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 004b9609  3b4e08               cmp ecx, dword ptr [esi + 8]
// 004b960c  740e                 je 0x4b961c
// 004b960e  8b5604               mov edx, dword ptr [esi + 4]
// 004b9611  8b423c               mov eax, dword ptr [edx + 0x3c]
// 004b9614  8a4838               mov cl, byte ptr [eax + 0x38]
// 004b9617  80f901               cmp cl, 1
// 004b961a  7521                 jne 0x4b963d
// 004b961c  8b5604               mov edx, dword ptr [esi + 4]
// 004b961f  57                   push edi
// 004b9620  8b7a3c               mov edi, dword ptr [edx + 0x3c]
// 004b9623  6a40                 push 0x40
// 004b9625  e8cc681700           call 0x62fef6
// 004b962a  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b962d  89413c               mov dword ptr [ecx + 0x3c], eax
// 004b9630  8b5604               mov edx, dword ptr [esi + 4]
// 004b9633  8b423c               mov eax, dword ptr [edx + 0x3c]
// 004b9636  83c404               add esp, 4
// 004b9639  89783c               mov dword ptr [eax + 0x3c], edi
// 004b963c  5f                   pop edi
// 004b963d  8b4604               mov eax, dword ptr [esi + 4]
// 004b9640  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 004b9643  894e04               mov dword ptr [esi + 4], ecx
// 004b9646  5e                   pop esi
// 004b9647  c3                   ret 

struct RakPeer {
    char pad0[4];
    struct Inner *field4;
    struct Inner *field8;
    void func();
};

struct Inner {
    char pad0[0x38];
    char field38;
    char pad39[3];
    struct Inner *field3c;
};

void RakPeer::func() {
    Inner *p = this->field4;
    if (p->field3c != this->field8) {
        Inner *q = this->field4;
        if (q->field3c->field38 != 1) {
            goto after;
        }
    }
    {
        Inner *r = this->field4;
        Inner *saved = r->field3c;
        Inner *allocated = (Inner *)operator new(0x40);
        this->field4->field3c = allocated;
        this->field4->field3c->field3c = saved;
    }
after:
    this->field4 = this->field4->field3c;
}
