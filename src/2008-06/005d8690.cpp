// from server: 48% by colin
// roc 2008-06 005d8690  unit: RBX::VHumanoid::?$FactoryProduct  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d8690

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" int __cdecl sub_6a17c6(int, int, int, int, int);

struct VHumanoid {
    char pad[0x1ec];
    int field_1ec;
    int field_1f0;
    int field_1f4;
    int field_1f8;
    int field_1fc;
    int f();
};

int VHumanoid::f() {
    int* pEnd;
    int* pBegin;
    int* pCur;
    int* pOld;
    int result;

    pEnd = (int*)this->field_1fc;
    if ((unsigned int)this->field_1f8 > (unsigned int)pEnd)
        _invalid_parameter_noinfo();

    pBegin = (int*)this->field_1f8;
    pOld = (int*)this->field_1ec;
    pCur = pBegin;
    if ((unsigned int)pCur > (unsigned int)this->field_1fc)
        _invalid_parameter_noinfo();

    pCur = (int*)this->field_1ec;

    for (;;) {
        if (pCur != 0 && pCur != pOld)
            _invalid_parameter_noinfo();

        if (pBegin == pEnd)
            return 0;

        if (pCur != 0) {
            result = *pCur;
        } else {
            _invalid_parameter_noinfo();
            result = 0;
            if ((unsigned int)pBegin < *(unsigned int*)(result + 0x10))
                _invalid_parameter_noinfo();
            result = *pBegin;
        }

        if (sub_6a17c6(result, 0, 0x936908, 0x9534e0, 0) != 0)
            return result;

        if (pCur == 0) {
            _invalid_parameter_noinfo();
            result = 0;
            if ((unsigned int)pBegin < *(unsigned int*)(result + 0x10))
                _invalid_parameter_noinfo();
        }

        pBegin = (int*)((char*)pBegin + 4);
    }
}
