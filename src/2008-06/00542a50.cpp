// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// std::vector<Ref>::_Insert_n for a refcounted element (dtor 00502a70 in unwind).
#include <vector>
template<class T>
struct Ref {
    Ref();
    Ref(const Ref& other);
    ~Ref();
    Ref& operator=(const Ref& other);
    T* pointer;
};
struct Chunk;
template class std::vector<Ref<Chunk> >;
