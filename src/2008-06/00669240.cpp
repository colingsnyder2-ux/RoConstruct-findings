// from server: 100% by king_originala
// roc 2008-06 00669240  unit: RBX::TreeStage  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669240
//
// 00669240  83ec0c               sub esp, 0xc
// 00669243  55                   push ebp
// 00669244  56                   push esi
// 00669245  8b742418             mov esi, dword ptr [esp + 0x18]
// 00669249  57                   push edi
// 0066924a  8bf9                 mov edi, ecx
// 0066924c  83c60c               add esi, 0xc
// 0066924f  bd02000000           mov ebp, 2
// 00669254  8b0e                 mov ecx, dword ptr [esi]
// 00669256  85c9                 test ecx, ecx
// 00669258  7423                 je 0x66927d
// 0066925a  e811e3f7ff           call 0x5e7570
// 0066925f  85c0                 test eax, eax
// 00669261  741a                 je 0x66927d
// 00669263  8944241c             mov dword ptr [esp + 0x1c], eax
// 00669267  8d44241c             lea eax, [esp + 0x1c]
// 0066926b  50                   push eax
// 0066926c  8d4c2410             lea ecx, [esp + 0x10]
// 00669270  51                   push ecx
// 00669271  8d4f38               lea ecx, [edi + 0x38]
// 00669274  e8c7f9f7ff           call 0x5e8c40
// 00669279  c6471401             mov byte ptr [edi + 0x14], 1
// 0066927d  83c604               add esi, 4
// 00669280  83ed01               sub ebp, 1
// 00669283  75cf                 jne 0x669254
// 00669285  5f                   pop edi
// 00669286  5e                   pop esi
// 00669287  5d                   pop ebp
// 00669288  83c40c               add esp, 0xc
// 0066928b  c20400               ret 4

struct Ball {
    int getBulletSphereShape() const;
};

struct Iterator {
    unsigned int data[3];
};

struct Container {
    Iterator insert(const int& value);
};

struct Input {
    unsigned char padding[12];
    Ball* balls[2];
};

struct TreeStage {
    unsigned char padding[20];
    unsigned char changed;
    unsigned char reserved[35];
    Container shapes;

    void update(Input* input);
};

void TreeStage::update(Input* input)
{
    Ball** current = input->balls;
    int remaining = 2;
    do {
        if (*current) {
            int result = (*current)->getBulletSphereShape();
            if (result) {
                int shape = result;
                shapes.insert(shape);
                changed = 1;
            }
        }
        ++current;
    } while (--remaining);
}
