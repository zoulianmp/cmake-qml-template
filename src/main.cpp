#include <QtCore/QCoreApplication>
#include <QtGui/QGuiApplication>
#include <QtQuick/QQuickView>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QCoreApplication::setApplicationName("My Application");
    //QCoreApplication::setAttribute(Qt::AA_X11InitThreads);

    QQuickView quickView;
    quickView.setSource(QUrl(QStringLiteral("qrc:/qml/main.qml")));
    quickView.setResizeMode(QQuickView::SizeRootObjectToView);
    quickView.show();

    return app.exec();
}
