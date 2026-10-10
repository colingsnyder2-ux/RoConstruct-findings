// from server: 36% by colin
// roc 2007-08 00699120  size: 146 bytes
// library: (unknown)

extern "C" {
    void __stdcall sub_77ddb8(void*);
    void __stdcall sub_77dd74(void*, void*);
    void __stdcall sub_77ddbc(void*);
}

struct CXTPPropertyGridItemConstraint {
    int  field_0x24;
    int  field_0x28;
    void* GetConstraint(int index, int arg2);
};

void* CXTPPropertyGridItemConstraint::GetConstraint(int index, int arg2)
{
    void* result;
    void* tmp;
    int flag;

    if (index >= 0 && index < this->field_0x28) {
        result = (void*)((char*)this->field_0x24 + index * 4);
        result = (char*)result + 0x20;
    } else {
        sub_77ddb8(&tmp);
        flag = 1;
        sub_77dd74(&tmp, (void*)0x785954);
        result = tmp;
        if (flag & 1) {
            sub_77ddbc(&tmp);
        }
    }
    return result;
}
