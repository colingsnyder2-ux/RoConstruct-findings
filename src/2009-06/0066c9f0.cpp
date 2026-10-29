// roc 2009-06 0066c9f0  unit: RBX::VHumanoid::?$EventDesc  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066c9f0
//
// 0066c9f0  d90598878d00         fld dword ptr [0x8d8798]
// 0066c9f6  56                   push esi
// 0066c9f7  8b742408             mov esi, dword ptr [esp + 8]
// 0066c9fb  d90508a88c00         fld dword ptr [0x8ca808]
// 0066ca01  d90514678c00         fld dword ptr [0x8c6714]
// 0066ca07  57                   push edi
// 0066ca08  d90510678c00         fld dword ptr [0x8c6710]
// 0066ca0e  33d2                 xor edx, edx
// 0066ca10  8d7e24               lea edi, [esi + 0x24]
// 0066ca13  d906                 fld dword ptr [esi]
// 0066ca15  33c9                 xor ecx, ecx
// 0066ca17  d8d4                 fcom st(4)
// 0066ca19  dfe0                 fnstsw ax
// 0066ca1b  f6c441               test ah, 0x41
// 0066ca1e  753e                 jne 0x66ca5e
// 0066ca20  d8d3                 fcom st(3)
// 0066ca22  dfe0                 fnstsw ax
// 0066ca24  f6c405               test ah, 5
// 0066ca27  7a35                 jp 0x66ca5e
// 0066ca29  41                   inc ecx
// 0066ca2a  83f903               cmp ecx, 3
// 0066ca2d  7ce8                 jl 0x66ca17
// 0066ca2f  ddd8                 fstp st(0)
// 0066ca31  d907                 fld dword ptr [edi]
// 0066ca33  d8d2                 fcom st(2)
// 0066ca35  dfe0                 fnstsw ax
// 0066ca37  f6c441               test ah, 0x41
// 0066ca3a  7522                 jne 0x66ca5e
// 0066ca3c  d8d9                 fcomp st(1)
// 0066ca3e  dfe0                 fnstsw ax
// 0066ca40  f6c405               test ah, 5
// 0066ca43  7a1b                 jp 0x66ca60
// 0066ca45  42                   inc edx
// 0066ca46  83c704               add edi, 4
// 0066ca49  83c610               add esi, 0x10
// 0066ca4c  83fa03               cmp edx, 3
// 0066ca4f  7cc2                 jl 0x66ca13
// 0066ca51  dddb                 fstp st(3)
// 0066ca53  5f                   pop edi
// 0066ca54  ddd9                 fstp st(1)
// 0066ca56  b001                 mov al, 1
// 0066ca58  ddd8                 fstp st(0)
// 0066ca5a  5e                   pop esi
// 0066ca5b  ddd8                 fstp st(0)
// 0066ca5d  c3                   ret 
// 0066ca5e  ddd8                 fstp st(0)
// 0066ca60  dddb                 fstp st(3)
// 0066ca62  5f                   pop edi
// 0066ca63  ddd9                 fstp st(1)
// 0066ca65  32c0                 xor al, al
// 0066ca67  ddd8                 fstp st(0)
// 0066ca69  5e                   pop esi
// 0066ca6a  ddd8                 fstp st(0)
// 0066ca6c  c3                   ret 
// copied from an identical function in another client (function ?validateFrame@@YA_NABUFrame@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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