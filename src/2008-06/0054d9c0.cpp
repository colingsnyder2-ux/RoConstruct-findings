// from server: 18% by colin
struct S_func_00458e90 {
    void f(int a1, int a2);
};

struct S_func_004dc3e0 {
    void f(void* a1, int a2);
};

struct Mesh {
    char pad[8];
    int* begin;
    int* end;
    int* capacity;
    void clear();
};

void Mesh::clear()
{
    if (this->begin != 0) {
        S_func_00458e90().f((int)this->begin, (int)this->end);
        int count = (int)((char*)this->end - (char*)this->begin) / 12;
        S_func_004dc3e0().f((void*)&this->begin, count);
    }
    this->begin = 0;
    this->end = 0;
    this->capacity = 0;
}
