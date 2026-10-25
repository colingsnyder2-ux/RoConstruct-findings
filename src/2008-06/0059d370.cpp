// from server: 100% by king_originala
// roc 2008-06 0059d370  unit: RBX::PartInstance  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059d370
//
// 0059d370  56                   push esi
// 0059d371  8bf1                 mov esi, ecx
// 0059d373  e828e8efff           call 0x49bba0
// 0059d378  8d4608               lea eax, [esi + 8]
// 0059d37b  50                   push eax
// 0059d37c  8d8e28020000         lea ecx, [esi + 0x228]
// 0059d382  e8c9a00400           call 0x5e7450
// 0059d387  5e                   pop esi
// 0059d388  c3                   ret 

struct Mutex {
    void lock();
};

struct Key {
    unsigned int first;
    unsigned int second;
};

struct Ball {
    void update(const Key &key);
};

struct S {
    Mutex mutex;
    unsigned char padding[7];
    Key key;
    unsigned char reserved[0x218];
    Ball ball;
    void f();
};

void S::f()
{
    mutex.lock();
    ball.update(key);
}
