// from server: 68% by atomic.potato
struct W4VisualTrussStyle_EnumDesc {
    int* field_68;
    int* field_6c;
    
    int __thiscall method(int arg);
};

extern "C" int* __cdecl sub_5C6DF0(int*);

int __thiscall W4VisualTrussStyle_EnumDesc::method(int arg) {
    int* result = sub_5C6DF0(&arg);
    int value = *result;
    if (value < 0) {
        return 0;
    }
    
    int count = (field_6c - field_68) >> 2;
    if (value >= count) {
        return 0;
    }
    
    return field_68[value];
}
