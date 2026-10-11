// from server: 44% by colin
// roc 2008-06 00679990  unit: Ogre::RbxSceneManagerFactory  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00679990

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __cdecl _invalid_parameter_noinfo_noreturn();

struct Vec4 {
    float x, y, z, w;
};

struct FloatVec {
    float* mBegin;
    float* mEnd;
    float* mCap;
};

struct IntVec {
    int* mBegin;
    int* mEnd;
    int* mCap;
};

struct RbxSceneManagerFactory {
    int mCount;
    char mPad[4];
    Vec4 mData[100];
    float getValue(int index);
};

void __stdcall sub_6798b0(void* dst, int count);
void __stdcall sub_679920(FloatVec* vec, float* value);
void __stdcall sub_6791e0(int* begin, int* end, int count);
void __stdcall sub_6a067a(void* p);
void __stdcall sub_439320(IntVec* vec);

float RbxSceneManagerFactory::getValue(int index) {
    if (index > 99 || index < mCount) {
        return *(float*)0x81c3b8;
    }
    FloatVec fv;
    sub_6798b0(&fv, index);
    IntVec iv;
    iv.mBegin = 0;
    iv.mEnd = 0;
    iv.mCap = 0;
    sub_439320(&iv);
    for (int i = 1; i <= index; ++i) {
        int idx = (mCount - i) % 100;
        sub_679920(&fv, &mData[idx].x);
    }
    int* ivEnd = iv.mEnd;
    int* ivBegin = iv.mBegin;
    int* ivCap = iv.mCap;
    if (ivBegin > ivEnd) {
        _invalid_parameter_noinfo();
        ivEnd = iv.mEnd;
        ivBegin = iv.mBegin;
    }
    float* fvBegin = fv.mBegin;
    float* fvEnd = fv.mEnd;
    if (fvBegin > fvEnd) {
        _invalid_parameter_noinfo();
        fvEnd = fv.mEnd;
        fvBegin = fv.mBegin;
    }
    if (fvBegin != 0 && fvBegin != fv.mBegin) {
        _invalid_parameter_noinfo();
    }
    int count = (int)((char*)ivEnd - (char*)ivBegin) >> 2;
    sub_6791e0(ivBegin, ivEnd, count);
    int half = index / 2;
    int diff = (int)((char*)iv.mEnd - (char*)iv.mBegin) >> 2;
    if (half < diff) {
        _invalid_parameter_noinfo();
        ivBegin = iv.mBegin;
    }
    float result = fvBegin[half];
    if (ivBegin != 0) {
        sub_6a067a(ivBegin);
    }
    if (fv.mBegin != 0) {
        sub_6a067a(fv.mBegin);
    }
    return result;
}
