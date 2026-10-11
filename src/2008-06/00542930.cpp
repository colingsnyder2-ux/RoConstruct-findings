// from server: 33% by tester
struct T;
typedef T* E;

struct Iterator_base_aux {
    E* _Myptr;
    E* _Getmycont() const;
    bool _Has_container() const;
};

E* Iterator_base_aux::_Getmycont() const {
    E* p = _Myptr;
    if (p) {
        return (E*)*p;
    }
    return 0;
}

bool Iterator_base_aux::_Has_container() const {
    return _Myptr != 0;
}

extern "C" void __stdcall _invalid_parameter_noinfo();

struct S {
    Iterator_base_aux* _Mynextiter;
    void _Addref();
};

void S::_Addref() {
    if (!_Mynextiter->_Has_container()) {
        _invalid_parameter_noinfo();
    }
    if (_Mynextiter->_Getmycont() == 0) {
        _invalid_parameter_noinfo();
    }
    _Mynextiter = (Iterator_base_aux*)((char*)_Mynextiter + 0x28);
}
