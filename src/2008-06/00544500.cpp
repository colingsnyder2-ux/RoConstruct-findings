// from server: 29% by colin
struct T;
typedef T* E;

struct Iterator_base_aux {
    E* _Mycont;
    bool _Has_container() const;
    bool _Same_container(const Iterator_base_aux& other) const;
};

bool Iterator_base_aux::_Has_container() const {
    return _Mycont != 0;
}

bool Iterator_base_aux::_Same_container(const Iterator_base_aux& other) const {
    return _Mycont == other._Mycont;
}

extern "C" void __stdcall _invalid_parameter_noinfo();

struct S {
    Iterator_base_aux _Iter;
    int f(Iterator_base_aux* other);
};

int S::f(Iterator_base_aux* other) {
    if (!_Iter._Has_container() || !_Iter._Same_container(*other)) {
        _invalid_parameter_noinfo();
    }
    return (int)((char*)_Iter._Mycont - (char*)other->_Mycont) >> 2;
}
