#ifndef CONN_MQ_HPP
#define CONN_MQ_HPP

#include <mqueue.h>

class ConnMq {
public:
    ConnMq(int id, bool create);
    void Read(char *buf, size_t count);
    void Write(const char *buf, size_t count);
    ~ConnMq();

private:
    int id;
    bool create;
    mqd_t mq;
};

#endif // CONN_MQ_HPP