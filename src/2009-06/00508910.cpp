// from server: 67% by atomic.potato
struct Job {
    char pad[0x70];
    Job* next;
};

void __cdecl insert(Job* job, Job** list) {
    if (job) {
        job = (Job*)((char*)job + 0x70);
        job->next = *list;
        *list = job;
    } else {
        Job* p = 0;
        p->next = *list;
        *list = p;
    }
}
