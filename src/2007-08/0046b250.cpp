// from server: 37% by colin
struct LDrawCommand {
    void* m_stream;
    bool m_flag;
    LDrawCommand(void* stream);
};

extern "C" {
    int __stdcall _Lock(void*);
    void* __stdcall _Tie(void*);
    bool __stdcall _Good(void*);
    void* __stdcall _Rdbuf(void*);
    void* __stdcall _Flush(void*);
}

LDrawCommand::LDrawCommand(void* stream) {
    m_stream = stream;
    void* p = *(void**)stream;
    void* q = (char*)stream + *(int*)((char*)p + 4);
    if (_Lock(q)) {
        void* r = *(void**)m_stream;
        void* s = (char*)m_stream + *(int*)((char*)r + 4);
        void* t = (void*)_Lock(s);
        _Flush(t);
    }
    void* u = *(void**)stream;
    void* v = (char*)stream + *(int*)((char*)u + 4);
    m_flag = false;
    if (_Good(v)) {
        void* w = *(void**)stream;
        void* x = (char*)stream + *(int*)((char*)w + 4);
        void* y = _Tie(x);
        if (y) {
            void* z = *(void**)stream;
            void* a = (char*)stream + *(int*)((char*)z + 4);
            void* b = _Tie(a);
            _Flush(b);
        }
    }
    void* c = *(void**)stream;
    void* d = (char*)stream + *(int*)((char*)c + 4);
    m_flag = _Good(d);
}
