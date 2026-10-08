// from server: 56% by colin
// roc 2007-08 0055e540  unit: RBX::RotateSelectionVerb  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e540
//
// 0055e540  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055e544  8b81e8000000         mov eax, dword ptr [ecx + 0xe8]
// 0055e54a  8b5004               mov edx, dword ptr [eax + 4]
// 0055e54d  81c1e8000000         add ecx, 0xe8
// 0055e553  ffe2                 jmp edx

struct RotateSelectionVerb {
    char pad0[0xe8];
    struct VTableHolder {
        void* pad0;
        void* fn;
    };
    VTableHolder* m_holder;
    void invoke();
};

void RotateSelectionVerb::invoke()
{
    VTableHolder* h = m_holder;
    void (*fn)() = (void (*)())h->fn;
    fn();
}
