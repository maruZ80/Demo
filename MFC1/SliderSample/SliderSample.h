
// SliderSample.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CSliderSampleApp:
// このクラスの実装については、SliderSample.cpp を参照してください
//

class CSliderSampleApp : public CWinApp
{
public:
	CSliderSampleApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CSliderSampleApp theApp;
