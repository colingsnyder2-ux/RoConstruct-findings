// from server: 93% by colin
struct Mutex {
    void lock();
    void unlock();
};

extern Mutex g_mutex_8C1DB0;
extern int dword_8C1D68;

struct ServiceProvider {
    int incrementCounter();
};

int ServiceProvider::incrementCounter()
{
    g_mutex_8C1DB0.lock();
    int old = dword_8C1D68;
    int next = old + 1;
    g_mutex_8C1DB0.unlock();
    dword_8C1D68 = next;
    return old;
}
