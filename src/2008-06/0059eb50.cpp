// from server: 100% by king_originala
// roc 2008-06 0059eb50  unit: RBX::PartInstance  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059eb50
//
// 0059eb50  8b442404             mov eax, dword ptr [esp + 4]
// 0059eb54  56                   push esi
// 0059eb55  8bf1                 mov esi, ecx
// 0059eb57  3986dc010000         cmp dword ptr [esi + 0x1dc], eax
// 0059eb5d  7475                 je 0x59ebd4
// 0059eb5f  8986dc010000         mov dword ptr [esi + 0x1dc], eax
// 0059eb65  48                   dec eax
// 0059eb66  f7d8                 neg eax
// 0059eb68  1bc0                 sbb eax, eax
// 0059eb6a  83c002               add eax, 2
// 0059eb6d  50                   push eax
// 0059eb6e  8d8e28020000         lea ecx, [esi + 0x228]
// 0059eb74  e8779b0400           call 0x5e86f0
// 0059eb79  83bedc01000001       cmp dword ptr [esi + 0x1dc], 1
// 0059eb80  741f                 je 0x59eba1
// 0059eb82  83bee001000000       cmp dword ptr [esi + 0x1e0], 0
// 0059eb89  7416                 je 0x59eba1
// 0059eb8b  68ec629700           push 0x9762ec
// 0059eb90  8bce                 mov ecx, esi
// 0059eb92  c786e001000000000000 mov dword ptr [esi + 0x1e0], 0
// 0059eb9c  e85fefe6ff           call 0x40db00
// 0059eba1  68a8609700           push 0x9760a8
// 0059eba6  8bce                 mov ecx, esi
// 0059eba8  e853efe6ff           call 0x40db00
// 0059ebad  683c609700           push 0x97603c
// 0059ebb2  8bce                 mov ecx, esi
// 0059ebb4  e847efe6ff           call 0x40db00
// 0059ebb9  8d8ecc010000         lea ecx, [esi + 0x1cc]
// 0059ebbf  c6869803000001       mov byte ptr [esi + 0x398], 1
// 0059ebc6  e875e90300           call 0x5dd540
// 0059ebcb  8b06                 mov eax, dword ptr [esi]
// 0059ebcd  8b5050               mov edx, dword ptr [eax + 0x50]
// 0059ebd0  8bce                 mov ecx, esi
// 0059ebd2  ffd2                 call edx
// 0059ebd4  5e                   pop esi
// 0059ebd5  c20400               ret 4

struct Property;
extern Property property9762ec;
extern Property property9760a8;
extern Property property97603c;

struct RenderState {
    char data[16];
    void shouldRenderSetDirty();
};

struct Controller {
    char data[4];
    void setMode(int value);
};

struct Part {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void changed();

    char padding04[0x1c8];
    RenderState renderState;
    int mode;
    int enabled;
    char padding1e4[0x44];
    Controller controller;
    char padding22c[0x16c];
    bool dirty;

    void raisePropertyChanged(const Property& property);
    void setMode(int value);
};

void Part::setMode(int value)
{
    if (mode != value) {
        mode = value;
        controller.setMode(value == 1 ? 2 : 1);

        if (mode != 1 && enabled != 0) {
            enabled = 0;
            raisePropertyChanged(property9762ec);
        }

        raisePropertyChanged(property9760a8);
        raisePropertyChanged(property97603c);
        dirty = true;
        renderState.shouldRenderSetDirty();
        changed();
    }
}
