// from server: 100% by king_originala
// roc 2008-06 005fd770  unit: RBX::Tool  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd770
//
// 005fd770  83ec34               sub esp, 0x34
// 005fd773  56                   push esi
// 005fd774  57                   push edi
// 005fd775  81c194fdffff         add ecx, 0xfffffd94
// 005fd77b  c744240800000000     mov dword ptr [esp + 8], 0
// 005fd783  e81831fbff           call 0x5b08a0
// 005fd788  85c0                 test eax, eax
// 005fd78a  7409                 je 0x5fd795
// 005fd78c  8bc8                 mov ecx, eax
// 005fd78e  e81db5f9ff           call 0x598cb0
// 005fd793  eb09                 jmp 0x5fd79e
// 005fd795  8d4c240c             lea ecx, [esp + 0xc]
// 005fd799  e832abe7ff           call 0x4782d0
// 005fd79e  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005fd7a2  8bf0                 mov esi, eax
// 005fd7a4  56                   push esi
// 005fd7a5  8bcf                 mov ecx, edi
// 005fd7a7  e8745af1ff           call 0x513220
// 005fd7ac  d94624               fld dword ptr [esi + 0x24]
// 005fd7af  d95f24               fstp dword ptr [edi + 0x24]
// 005fd7b2  8bc7                 mov eax, edi
// 005fd7b4  d94628               fld dword ptr [esi + 0x28]
// 005fd7b7  d95f28               fstp dword ptr [edi + 0x28]
// 005fd7ba  d9462c               fld dword ptr [esi + 0x2c]
// 005fd7bd  d95f2c               fstp dword ptr [edi + 0x2c]
// 005fd7c0  5f                   pop edi
// 005fd7c1  5e                   pop esi
// 005fd7c2  83c434               add esp, 0x34
// 005fd7c5  c20400               ret 4

struct Matrix {
    char data[36];
    Matrix* copyFrom(const Matrix* source);
};

struct Frame {
    Matrix rotation;
    float f24, f28, f2c;
    Frame* initialize();
};

struct Helper {
    Frame* method();
};

struct Owner {
    Helper* getPart();
};

struct Tool {
    Frame* copyFrom(Frame* other);
};

Frame* Tool::copyFrom(Frame* other)
{
    volatile int flag = 0;
    Frame item;
    Helper* p = reinterpret_cast<Owner*>(
        reinterpret_cast<char*>(this) - 0x26c)->getPart();

    Frame* src;
    if (p)
        src = p->method();
    else
        src = item.initialize();

    other->rotation.copyFrom(&src->rotation);
    other->f24 = src->f24;
    other->f28 = src->f28;
    other->f2c = src->f2c;
    return other;
}
