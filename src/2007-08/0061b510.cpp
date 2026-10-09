// from server: 50% by colin
// roc 2007-08 0061b510  unit: RBX::UnifiedImageWidget  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061b510
//
// 0061b510  83ec10               sub esp, 0x10
// 0061b513  56                   push esi
// 0061b514  8bf1                 mov esi, ecx
// 0061b516  8b06                 mov eax, dword ptr [esi]
// 0061b518  8b5058               mov edx, dword ptr [eax + 0x58]
// 0061b51b  ffd2                 call edx
// 0061b51d  84c0                 test al, al
// 0061b51f  7444                 je 0x61b565
// 0061b521  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0061b527  83f801               cmp eax, 1
// 0061b52a  7414                 je 0x61b540
// 0061b52c  83c0fe               add eax, -2
// 0061b52f  b901000000           mov ecx, 1
// 0061b534  3bc8                 cmp ecx, eax
// 0061b536  1bc0                 sbb eax, eax
// 0061b538  83e0fe               and eax, 0xfffffffe
// 0061b53b  83c002               add eax, 2
// 0061b53e  eb05                 jmp 0x61b545
// 0061b540  b801000000           mov eax, 1
// 0061b545  50                   push eax
// 0061b546  8d542408             lea edx, [esp + 8]
// 0061b54a  52                   push edx
// 0061b54b  8bce                 mov ecx, esi
// 0061b54d  e85ea0f3ff           call 0x5555b0
// 0061b552  50                   push eax
// 0061b553  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061b557  6a01                 push 1
// 0061b559  50                   push eax
// 0061b55a  8d8e00010000         lea ecx, [esi + 0x100]
// 0061b560  e8fb5cfeff           call 0x601260
// 0061b565  5e                   pop esi
// 0061b566  83c410               add esp, 0x10
// 0061b569  c20400               ret 4

struct UnifiedWidget {
    virtual bool isVisible();
    virtual void onMenuStateChanged();
};

struct UnifiedImageWidget : UnifiedWidget {
    char pad[0xf8];
    int imageState;
    char pad2[4];
    void updateImage(int state, int* out);
    void setImage(int state, int* out);
    void method(int arg);
};

void UnifiedImageWidget::method(int arg)
{
    if (this->isVisible()) {
        int state = this->imageState;
        int v;
        if (state == 1) {
            v = 1;
        } else {
            int t = state - 2;
            int c = 1;
            v = (c < t) ? 0 : 2;
        }
        int tmp;
        this->updateImage(v, &tmp);
        this->setImage(1, &tmp);
    }
}
