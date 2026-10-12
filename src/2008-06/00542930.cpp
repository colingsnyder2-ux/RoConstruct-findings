// from server: 36% by colin
struct T;
typedef T* E;

struct Iterator_base_aux {
    E* _Myptr;
    const void* _Getmycont() const;
    bool _Has_container() const;
};

const void* Iterator_base_aux::_Getmycont() const {
    E* p = _Myptr;
    if (p)
        return (const void*)*p;
    return 0;
}

bool Iterator_base_aux::_Has_container() const {
    return _Myptr != 0;
}

extern "C" void __stdcall _invalid_parameter_noinfo();

struct S {
    Iterator_base_aux* _Myfirstiter;
    E* _Mynextiter;
    void _Adopt();
};

void S::_Adopt() {
    if (!_Myfirstiter->_Has_container())
        _invalid_parameter_noinfo();
    if (!_Myfirstiter->_Has_container())
        _invalid_parameter_noinfo();
    const void* c = _Myfirstiter->_Getmycont();
    if (_Mynextiter >= (E*)((char*)c + 0x10))
        _invalid_parameter_noinfo();
    if (_Mynextiter >= (E*)((char*)c + 0x10))
        _invalid_parameter_noinfo();
    _Mynextiter = (E*)((char*)_Mynextiter + 0x28);
}
