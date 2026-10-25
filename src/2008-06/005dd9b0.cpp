// from server: 100% by king_originala
// roc 2008-06 005dd9b0  unit: RBX::Message  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd9b0
//
// 005dd9b0  d9056c0b8300         fld dword ptr [0x830b6c]
// 005dd9b6  56                   push esi
// 005dd9b7  8b742408             mov esi, dword ptr [esp + 8]
// 005dd9bb  d90578728200         fld dword ptr [0x827278]
// 005dd9c1  d905083e8200         fld dword ptr [0x823e08]
// 005dd9c7  57                   push edi
// 005dd9c8  d905043e8200         fld dword ptr [0x823e04]
// 005dd9ce  33d2                 xor edx, edx
// 005dd9d0  8d7e24               lea edi, [esi + 0x24]
// 005dd9d3  d906                 fld dword ptr [esi]
// 005dd9d5  33c9                 xor ecx, ecx
// 005dd9d7  d8d4                 fcom st(4)
// 005dd9d9  dfe0                 fnstsw ax
// 005dd9db  f6c441               test ah, 0x41
// 005dd9de  753e                 jne 0x5dda1e
// 005dd9e0  d8d3                 fcom st(3)
// 005dd9e2  dfe0                 fnstsw ax
// 005dd9e4  f6c405               test ah, 5
// 005dd9e7  7a35                 jp 0x5dda1e
// 005dd9e9  41                   inc ecx
// 005dd9ea  83f903               cmp ecx, 3
// 005dd9ed  7ce8                 jl 0x5dd9d7
// 005dd9ef  ddd8                 fstp st(0)
// 005dd9f1  d907                 fld dword ptr [edi]
// 005dd9f3  d8d2                 fcom st(2)
// 005dd9f5  dfe0                 fnstsw ax
// 005dd9f7  f6c441               test ah, 0x41
// 005dd9fa  7522                 jne 0x5dda1e
// 005dd9fc  d8d9                 fcomp st(1)
// 005dd9fe  dfe0                 fnstsw ax
// 005dda00  f6c405               test ah, 5
// 005dda03  7a1b                 jp 0x5dda20
// 005dda05  42                   inc edx
// 005dda06  83c704               add edi, 4
// 005dda09  83c610               add esi, 0x10
// 005dda0c  83fa03               cmp edx, 3
// 005dda0f  7cc2                 jl 0x5dd9d3
// 005dda11  dddb                 fstp st(3)
// 005dda13  5f                   pop edi
// 005dda14  ddd9                 fstp st(1)
// 005dda16  b001                 mov al, 1
// 005dda18  ddd8                 fstp st(0)
// 005dda1a  5e                   pop esi
// 005dda1b  ddd8                 fstp st(0)
// 005dda1d  c3                   ret 
// 005dda1e  ddd8                 fstp st(0)
// 005dda20  dddb                 fstp st(3)
// 005dda22  5f                   pop edi
// 005dda23  ddd9                 fstp st(1)
// 005dda25  32c0                 xor al, al
// 005dda27  ddd8                 fstp st(0)
// 005dda29  5e                   pop esi
// 005dda2a  ddd8                 fstp st(0)
// 005dda2c  c3                   ret 

extern const float rotationMinimum;
extern const float rotationMaximum;
extern const float positionMinimum;
extern const float positionMaximum;

struct Frame {
    float rotation[3][3];
    float position[3];
};

bool validateFrame(const Frame& frame)
{
    for (int i = 0; i < 3; ++i) {
        double rotation = frame.rotation[i][i];
        for (int j = 0; j < 3; ++j) {
            if (!(rotation > rotationMinimum &&
                  rotation < rotationMaximum))
                return false;
        }

        double position = frame.position[i];
        if (!(position > positionMinimum &&
              position < positionMaximum))
            return false;
    }
    return true;
}
